<div class="news-tabs border mb-3 px-3">

                        <!-- 标题 -->
                        <div class="row m-3">
                            <dl class="d-flex justify-content-between bg-gray">
                                <dt>
                                    <h2 class="title-theme2">{dede:field name='typename'/}</h2>
                                </dt>
                                <!-- 二级分类 -->

                                <dd class="m-auto px-2">
                                    <ul class="nav m-auto">  
                                        {dede:channel type='son'}
                                        <li class="nav-item">
                                          <h3>
                                                <a href="[field:typelink/]" class="nav-link">[field:typename/]</a>
                                            </h3>
                                        </li>
                                        {/dede:channel}
                                    </ul>
                                </dd>

                            </dl>
                        </div>

                        <!-- 内容列表 -->
                        <ul class="row">
                            {dede:arclist row='6'}
                            <li class="col-lg-4 col-md-6">
                                <!-- 图片 -->
                                <a href="[field:arcurl/]">
                                    <img src="[field:litpic/]" class="img-thumbnail" alt="[field:title/]">
                                </a>
                                <!-- 内容标题 -->
                                <div class="post_box mt-2">
                                    <h4>
                                        <a href="[field:arcurl/]" alt="[field:title/]"
                                            title="[field:title/]">[field:title/]</a>
                                    </h4>
                                    <time class="small mr-4">
                                        <i class="fa fa-calendar red mr-2"></i>
                                        [field:pubdate function="Mydate('Y-m-d',@me)"/]
                                    </time>
                                    <span><i class="fa fa-eye red mr-2"></i><small>阅读：[field:click/]</small></span>
                                </div>
                            </li>
                            {/dede:arclist}
                        </ul>
                    </div>