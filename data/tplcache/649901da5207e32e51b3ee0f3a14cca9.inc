<h2>{dede:field name='typename'}</h2>
            </div>
            {dede:arclist row='1' flag='h' orderby='rand' }
           
                    <h4 class="title-18 pr-0">
                        <a href="[field:arcurl/]">[field:title/]</a>
                    </h4>
                    <div class="postbox__text-meta pb-10">
                        <ul>
                            <li>
                                <i class="fas fa-calendar-alt"></i>
                                <span>[field:pubdate function="('Y年m月d日',@me)"/]</span>
                            </li>
                           
                        </ul>
                    </div>
                </div>
            </div>
            {/dede:arclist}