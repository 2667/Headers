//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WGGameModel.h"

@class NSString, WGGameAppExtendInfo;

@interface WGGameAppInfo2 : WGGameModel
{
    _Bool _collected;
    _Bool _ordered;
    NSString *_title;
    NSString *_aid;
    NSString *_appkey;
    NSString *_dev_uid;
    NSString *_app_tips;
    NSString *_app_desc;
    NSString *_game_staff;
    NSString *_weibo_url;
    NSString *_tag;
    NSString *_status;
    NSString *_icon_url;
    NSString *_poster_url;
    NSString *_video_url;
    long long _direction;
    NSString *_dev_name;
    NSString *_down_url;
    NSString *_file_size;
    NSString *_package;
    NSString *_version_code;
    NSString *_md5value;
    NSString *_fcode;
    NSString *_kind;
    double _rate;
    NSString *_share_scheme;
    long long _ordered_num;
    WGGameAppExtendInfo *_extend;
    NSString *_app_name;
    NSString *_app_tips2;
    NSString *_game_logo;
    NSString *_game_header;
    NSString *_game_banner;
    NSString *_open_scheme;
    NSString *_download_url;
    NSString *_isnew;
    NSString *_tag_icon;
    NSString *_detail_scheme;
    long long _comment_count;
    long long _version;
    NSString *_id;
    NSString *_app_key;
    NSString *_desc;
    NSString *_button;
    NSString *_link_url;
    NSString *_button_url;
    NSString *_content;
    NSString *_total_count;
    NSString *_get_start_time;
    NSString *_get_end_time;
    NSString *_take_start_time;
    NSString *_take_end_time;
    NSString *_get_count;
    NSString *_remain_count;
}

@property(copy, nonatomic) NSString *remain_count; // @synthesize remain_count=_remain_count;
@property(copy, nonatomic) NSString *get_count; // @synthesize get_count=_get_count;
@property(copy, nonatomic) NSString *take_end_time; // @synthesize take_end_time=_take_end_time;
@property(copy, nonatomic) NSString *take_start_time; // @synthesize take_start_time=_take_start_time;
@property(copy, nonatomic) NSString *get_end_time; // @synthesize get_end_time=_get_end_time;
@property(copy, nonatomic) NSString *get_start_time; // @synthesize get_start_time=_get_start_time;
@property(copy, nonatomic) NSString *total_count; // @synthesize total_count=_total_count;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *button_url; // @synthesize button_url=_button_url;
@property(copy, nonatomic) NSString *link_url; // @synthesize link_url=_link_url;
@property(copy, nonatomic) NSString *button; // @synthesize button=_button;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *app_key; // @synthesize app_key=_app_key;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long comment_count; // @synthesize comment_count=_comment_count;
@property(copy, nonatomic) NSString *detail_scheme; // @synthesize detail_scheme=_detail_scheme;
@property(copy, nonatomic) NSString *tag_icon; // @synthesize tag_icon=_tag_icon;
@property(copy, nonatomic) NSString *isnew; // @synthesize isnew=_isnew;
@property(copy, nonatomic) NSString *download_url; // @synthesize download_url=_download_url;
@property(copy, nonatomic) NSString *open_scheme; // @synthesize open_scheme=_open_scheme;
@property(copy, nonatomic) NSString *game_banner; // @synthesize game_banner=_game_banner;
@property(copy, nonatomic) NSString *game_header; // @synthesize game_header=_game_header;
@property(copy, nonatomic) NSString *game_logo; // @synthesize game_logo=_game_logo;
@property(copy, nonatomic) NSString *app_tips2; // @synthesize app_tips2=_app_tips2;
@property(copy, nonatomic) NSString *app_name; // @synthesize app_name=_app_name;
@property(retain, nonatomic) WGGameAppExtendInfo *extend; // @synthesize extend=_extend;
@property(nonatomic) long long ordered_num; // @synthesize ordered_num=_ordered_num;
@property(nonatomic) _Bool ordered; // @synthesize ordered=_ordered;
@property(copy, nonatomic) NSString *share_scheme; // @synthesize share_scheme=_share_scheme;
@property(nonatomic) _Bool collected; // @synthesize collected=_collected;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *fcode; // @synthesize fcode=_fcode;
@property(copy, nonatomic) NSString *md5value; // @synthesize md5value=_md5value;
@property(copy, nonatomic) NSString *version_code; // @synthesize version_code=_version_code;
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
@property(copy, nonatomic) NSString *file_size; // @synthesize file_size=_file_size;
@property(copy, nonatomic) NSString *down_url; // @synthesize down_url=_down_url;
@property(copy, nonatomic) NSString *dev_name; // @synthesize dev_name=_dev_name;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(copy, nonatomic) NSString *poster_url; // @synthesize poster_url=_poster_url;
@property(copy, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *weibo_url; // @synthesize weibo_url=_weibo_url;
@property(copy, nonatomic) NSString *game_staff; // @synthesize game_staff=_game_staff;
@property(copy, nonatomic) NSString *app_desc; // @synthesize app_desc=_app_desc;
@property(copy, nonatomic) NSString *app_tips; // @synthesize app_tips=_app_tips;
@property(copy, nonatomic) NSString *dev_uid; // @synthesize dev_uid=_dev_uid;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)giftRemain;

@end

