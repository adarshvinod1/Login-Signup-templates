// Get form element
const loginForm = document.getElementById('loginForm');

// Handle form submission
loginForm.addEventListener('submit', function(e) {
    e.preventDefault();
    
    // Get input values
    const email = document.getElementById('email').value;
    const password = document.getElementById('password').value;
    const remember = document.getElementById('remember').checked;
    
    // Get button
    const btn = loginForm.querySelector('.btn-login');
    
    // Show loading state
    btn.textContent = 'Logging in...';
    btn.disabled = true;
    
    // Simulate login (replace with actual login logic)
    setTimeout(() => {
        console.log('Email:', email);
        console.log('Password:', password);
        console.log('Remember me:', remember);
        
        alert('Login successful!');
        
        // Reset button
        btn.textContent = 'Login';
        btn.disabled = false;
        
        // Clear form
        loginForm.reset();
    }, 1500);
});

// Optional: Add enter key support for better UX
document.getElementById('password').addEventListener('keypress', function(e) {
    if (e.key === 'Enter') {
        loginForm.dispatchEvent(new Event('submit'));
    }
});