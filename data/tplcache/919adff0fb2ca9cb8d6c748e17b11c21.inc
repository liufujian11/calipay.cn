<div class="col-xl-4 col-lg-4 col-md-6">
                            <div class="section-title mb-30">
                                <h2><a href="{dede:field name='typeurl'/}" target="_blank">{dede:field
                                        name='typename'/}</a>
                            </div>

                            <div class="cat-sm-post">

                                <div class="post__small mb-30">
                                    {dede:arclist row='2'}
                                    <div class="post__small-text fix pl-10">
                                       
                                        <div class="post__small-text-meta">
                                            <ul>
                                                <li>
                                                    <i class="fas fa-calendar-alt"></i>
                                                    <span>[field:pubdate function="('Y-m-d',@me)"/]</span>
                                                </li>
                                            </ul>
                                        </div>
                                    </div>
                                    {/dede:arclist}
                                </div>
                            </div>


                        </div>