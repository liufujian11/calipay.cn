<div class="col-xl-4 col-lg-4 col-md-6">
                    <div class="section-title mb-30">
                        <h2><a href="{dede:field name='typeurl'/}" target="_blank">{dede:field name='typename'/}</a>
                    </div>
                    {dede:arclist row=1 }
                    <div class="postbox mb-25">
                        <div class="postbox__thumb">
                            <a href="[field:arcurl/]">
                                <img src="[field:litpic/]" alt="[field:title/]">
                            </a>
                        </div>
                        <div class="postbox__text pt-20">
                            <h4 class="title-18 pr-0">
                                <a href="[field:arcurl/]">[field:title/]</a>
                            </h4>
                            <div class="postbox__text-meta pb-10">
                                <ul>
                                    <li>
                                        <i class="fas fa-calendar-alt"></i>
                                        <span>[field:pubdate function="('Y年m月d日',@me)"/]</span>
                                    </li>
                                    <li>
                                        <i class="far fa-comment"></i>
                                        <span>(03)</span>
                                    </li>
                                </ul>
                            </div>
                        </div>
                    </div>
                    {/dede:arclist}


                
                </div>