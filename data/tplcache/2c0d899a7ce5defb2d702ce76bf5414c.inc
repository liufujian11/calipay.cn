<li class="nav-li">
                        <a href="{dede:field name='typeurl'/}" class="dropdown-toggle">{dede:field name='typename'/}</a>
                        <ul class="submenu">
                            {dede:channel type='son' row='6'}
                            <li><a href="[field:typelink/]">[field:typename/]</a></li>
                            {/dede:channel}
                        </ul>
                    </li>