package com.demo.service;

import com.demo.beans.Student;
import com.demo.dao.StudentDao;

public class StudentService {

	StudentDao dao=new StudentDao();
	
	public int addStudent(Student s) {
		return dao.saveStudent;
	}
}
