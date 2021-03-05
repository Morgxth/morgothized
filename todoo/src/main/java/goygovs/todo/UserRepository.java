package goygovs.todo;

import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface UserRepository extends JpaRepository<User, Long> {

	List<User> findByLastNameStartsWithIgnoreCase(String lastName);
}