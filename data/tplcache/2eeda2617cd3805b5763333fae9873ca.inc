<div class="col-md-8 border">              
                <h2><a href="{dede:field name='typeurl'/}" target="_blank">{dede:field name='typename'/}</a>
                <ul class="d-flex justify-content-around">
                    {dede:arclist  orderby='pubdate' row='6' titlelen='42' }
                    <li class="list-unstyled">
                        <div>
                            <a href="[field:arcurl/]" title="[field:title/]​" target="_blank">
                                <img src="[field:litpic/]"alt="[field:title/]">                              
                            </a>
                        </div>
                        <h3><a href="[field:arcurl/]" title="[field:title/]​" target="_blank">
                            <strong>[field:title/]</strong>
                        </a>
                        </h3>
                        <p> [field:pubdate function="MyDate('Y年m月d日',@me)"/]
                                查看： [field:click/]
                            </p>
                    </li>
                    {/dede:arclist}
                </ul>
            </div>