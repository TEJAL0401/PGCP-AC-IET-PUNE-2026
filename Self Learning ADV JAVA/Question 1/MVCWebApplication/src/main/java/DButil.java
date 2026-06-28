import java.sql.*;
import java.util.*;

import com.demo.dao.Student;

public class DButil {

    Connection con;

    public DButil() {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/testdb","root","Mahadev@0401"
            		+ "");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    // INSERT
    public int saveStudent(Student s) throws Exception {
        String sql = "insert into student(name, city) values(?,?)";
        PreparedStatement ps = con.prepareStatement(sql);
        ps.setString(1, s.getName());
        ps.setString(2, s.getCity());
        return ps.executeUpdate();
    }

    // SELECT
    public List<Student> getAllStudents() throws Exception {
        List<Student> list = new ArrayList<>();
        Statement st = con.createStatement();
        ResultSet rs = st.executeQuery("select * from student");

        while (rs.next()) {
            Student s = new Student();
            s.setSid(rs.getInt(1));
            s.setName(rs.getString(2));
            s.setCity(rs.getString(3));
            list.add(s);
        }
        return list;
    }

    // DELETE
    public int deleteStudent(int id) throws Exception {
        PreparedStatement ps = con.prepareStatement(
            "delete from student where id=?"
        );
        ps.setInt(1, id);
        return ps.executeUpdate();
    }

    // UPDATE
    public int updateStudent(Student s) throws Exception {
        PreparedStatement ps = con.prepareStatement(
            "update student set name=?, city=? where id=?"
        );
        ps.setString(1, s.getName());
        ps.setString(2, s.getCity());
        ps.setInt(3, s.getSid());
        return ps.executeUpdate();
    }
}