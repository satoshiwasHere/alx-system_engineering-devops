# Puppet script executes 'Killmenow' command

exec
{ 'kill':
  command => 'pkill -f killmenow',
  path    => ['/usr/bin', '/usr/sbin']
}
