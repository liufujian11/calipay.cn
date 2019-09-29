分类: <a href="[field:typeurl/]" tabindex="0">[field:typename/]</a>
                  
                                时间:<i class="fas fa-calendar-alt"></i> [field:pubdate function="MyDate('Y-m-d',@me)"/]</span>
                   
                           标题: <a href="[field:arcurl/]">[field:title/]</a>
               
                           点击:    <span>[field:click/]</span>                          
                          简介:  <p>[field:info/]</p>                 
           {dede:arclist/}
        </div>

        <!-- latest news -->
        <section class="sidebar-area pt-30 pb-30">
            <div class="container">
                <div class="row">
                    <div class="col-xl-8 col-lg-8">
                        <!-- 封面头条 -->
                        
                        <div class="content-pad border pb-0 mb-50">
                                {dede:arclist row='3' flag='h' type='image' infolen='160'}
                            <div class="row">
                                <div class="col-xl-6 col-lg-4 col-md-5">
                                    <div class="postbox mb-30">
                                        <div class="postbox__thumb">
                                            <a href="[field:arcurl/]">
                                                <img src="[field:litpic/]" alt="[field:title/]">
                                            </a>
                                        </div>
                                    </div>
                                </div>
                                <div class="col-xl-6 col-lg-8 col-md-7">
                                    <div class="postbox__text mb-30">
                                        <div class="meta-top">
                                            <span class="post-cat mb-10 mr-10">
                                                <a href="[field:typeurl/]" tabindex="0">[field:typename/]</a>
                                            </span>
                                            <span>
                                                <i class="fas fa-calendar-alt"></i> [field:pubdate function="MyDate('Y-m-d',@me)"/]</span>
                                        </div>
                                        <h4 class="title-16 pr-0">
                                            <a href="[field:arcurl/]">[field:title/]</a>
                                        </h4>
                                        <div class="postbox__text-meta pb-10">
                                            <ul>
                                                <li>
                                                    <i class="fas fa-calendar-alt"></i>
                                                    <span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span>
                                                </li>
                                                <li>
                                                    <i class="far fa-comment"></i>
                                                    <span>[field:click/]</span>
                                                </li>
                                            </ul>
                                        </div>
                                        <div class="desc-text mb-20">
                                            <p>[field:info/]</p>
                                        </div>
                                        <a href="[field:arcurl/]" class="btn btn-soft">查看更多</a>
                                    </div>
                                </div>
                            </div>
                           {dede:arclist/}
                        </div>
                        <!-- /封面头条 -->

                        <!-- 循环分类调用 -->
                        <div class="content-pad border pb-0 mb-50">
                            {dede:channelartlist}
                            <div class="news-tab-area">
                                <div class="news-tab-part grey-bg clearfix mb-30">
                                    <div class="title-theme f-left">
                                        <h2>{dede:field.typename/}</h2>
                                    </div>
                                    <ul class="nav news-tabs f-right" id="myTab" role="tablist">
                                        <li class="nav-item">
                                            <a class="nav-link active" id="home-tab" data-toggle="tab" href="#home"
                                                role="tab" aria-controls="home" aria-selected="true">science </a>
                                        </li>
                                        <li class="nav-item">
                                            <a class="nav-link" id="profile-tab" data-toggle="tab" href="#profile"
                                                role="tab" aria-controls="profile" aria-selected="false">travel</a>
                                        </li>
                                        <li class="nav-item">
                                            <a class="nav-link" id="contact-tab" data-toggle="tab" href="#contact"
                                                role="tab" aria-controls="contact" aria-selected="false">fashion</a>
                                        </li>
                                    </ul>
                                </div>
                                <div class="tab-content" id="myTabContent">
                                    <div class="tab-pane fade show active" id="home" role="tabpanel"
                                        aria-labelledby="home-tab">
                                        <div class="row">
                                            {dede:arclist row=6}
                                            <div class="col-xl-4 col-lg-6 col-md-6">
                                                <div class="postbox mb-25">
                                                    <div class="postbox__thumb" data-overlay="dark" data-opacity="2">
                                                        <a href="[field:arcurl/]">
                                                            <img src="[field:litpic/]" alt="[field:title/]">
                                                        </a>
                                                    </div>
                                                    <div class="postbox__text pt-15">
                                                        <div class="postbox__text-meta pb-10">
                                                            <ul>
                                                                <li>
                                                                    <i class="fas fa-calendar-alt"></i>
                                                                    <span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span>
                                                                </li>
                                                                <li>
                                                                    <i class="far fa-comment"></i>
                                                                    <span>(03)</span>
                                                                </li>
                                                            </ul>
                                                        </div>
                                                        <h4 class="title-14 font-600 pr-0">
                                                            <a href="#">[field:title/]</a>
                                                        </h4>
                                                    </div>
                                                </div>
                                            </div>