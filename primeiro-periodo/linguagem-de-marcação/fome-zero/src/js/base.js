const $html = document.querySelector('html')
const $checkbox = document.querySelector('#checkbox-theme')

$checkbox.addEventListener('change', function() {
	$html.classList.toggle('dark-mode')
})