# A puppet manuscript that changes a line in a file on a server

$file_to_edit = '/var/www/html/wp-settings.php'

#Change line containing "phpp" to "php"

exec { 'replace_line':
  command => "sed -i 's/phpp/php/g' ${file_to_edit}",
  path    => ['/bin','/usr/bin']
}
