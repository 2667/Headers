//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSNumber, NSString, NSURL, YXCovers;

@interface YXMessageCommentModel : YXModel
{
    NSString *_messageId;
    NSString *_memberid;
    NSString *_tags;
    NSString *_desc;
    NSString *_cover_domain;
    NSURL *_cover;
    double _filesize;
    double _lon;
    double _lat;
    NSString *_address;
    long long _type;
    long long _status;
    NSNumber *_updatetime;
    NSString *_createip;
    NSNumber *_createtime;
    NSString *_scid;
    YXCovers *_covers;
    long long _mtype;
    NSString *_comment_memberid;
    NSString *_mtypename;
    NSString *_action_nickname;
    NSURL *_action_avatar;
    long long _actoin_sex;
    NSString *_comment_content;
    long long _ytypevt;
}

+ (id)keyMapper;
@property(nonatomic) long long ytypevt; // @synthesize ytypevt=_ytypevt;
@property(retain, nonatomic) NSString *comment_content; // @synthesize comment_content=_comment_content;
@property(nonatomic) long long actoin_sex; // @synthesize actoin_sex=_actoin_sex;
@property(retain, nonatomic) NSURL *action_avatar; // @synthesize action_avatar=_action_avatar;
@property(retain, nonatomic) NSString *action_nickname; // @synthesize action_nickname=_action_nickname;
@property(retain, nonatomic) NSString *mtypename; // @synthesize mtypename=_mtypename;
@property(retain, nonatomic) NSString *comment_memberid; // @synthesize comment_memberid=_comment_memberid;
@property(nonatomic) long long mtype; // @synthesize mtype=_mtype;
@property(retain, nonatomic) YXCovers *covers; // @synthesize covers=_covers;
@property(retain, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(retain, nonatomic) NSNumber *createtime; // @synthesize createtime=_createtime;
@property(retain, nonatomic) NSString *createip; // @synthesize createip=_createip;
@property(retain, nonatomic) NSNumber *updatetime; // @synthesize updatetime=_updatetime;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lon; // @synthesize lon=_lon;
@property(nonatomic) double filesize; // @synthesize filesize=_filesize;
@property(retain, nonatomic) NSURL *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSString *cover_domain; // @synthesize cover_domain=_cover_domain;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;

@end

