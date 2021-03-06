//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQModelLabel-Protocol.h>

@class NSDictionary, NSMutableArray, NSString;

@interface DiscussGroupInfo : NSObject <IQQModelLabel>
{
    long long _groupUin;
    NSString *_name;
    int _flag;
    int _infoSeq;
    int _faceId;
    long long _ownerUin;
    int _memberNum;
    int _createTime;
    long long _remarkTimeStamp;
    NSDictionary *_cachedMemberNicks;
    long long _lastCacheTimestamp;
    NSMutableArray *_members;
    long long _convertGroupCode;
    long long _convertGroupUin;
    int _errCode;
    int _msgSeq;
    int _lastMsgTime;
    long long _inheritOwnerUin;
    int _lastInfoTime;
    int _avConfType;
    _Bool _isBlock;
    _Bool _isPushNotice;
    struct _NSRange _matchRange;
    NSString *_matchMember;
    NSString *_tmpSortName;
    NSString *_lastMsgTimeStr;
    int _xo;
    _Bool _isFavorite;
}

+ (void)setSearchModelPriority:(int)arg1;
+ (id)createFromDict:(id)arg1;
@property(retain, nonatomic) NSString *lastMsgTimeStr; // @synthesize lastMsgTimeStr=_lastMsgTimeStr;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) int avConfType; // @synthesize avConfType=_avConfType;
@property(nonatomic) long long inheritOwnerUin; // @synthesize inheritOwnerUin=_inheritOwnerUin;
@property(nonatomic) int lastInfoTime; // @synthesize lastInfoTime=_lastInfoTime;
@property(nonatomic) int lastMsgTime; // @synthesize lastMsgTime=_lastMsgTime;
@property(nonatomic) int msgSeq; // @synthesize msgSeq=_msgSeq;
@property(nonatomic) long long convertGroupUin; // @synthesize convertGroupUin=_convertGroupUin;
@property(nonatomic) long long convertGroupCode; // @synthesize convertGroupCode=_convertGroupCode;
@property(nonatomic) long long lastCacheTimestamp; // @synthesize lastCacheTimestamp=_lastCacheTimestamp;
@property(retain, nonatomic) NSDictionary *cachedMemberNicks; // @synthesize cachedMemberNicks=_cachedMemberNicks;
@property(retain, nonatomic) NSString *tmpSortName; // @synthesize tmpSortName=_tmpSortName;
@property(nonatomic) long long remarkTimeStamp; // @synthesize remarkTimeStamp=_remarkTimeStamp;
@property(nonatomic) _Bool isPushNotice; // @synthesize isPushNotice=_isPushNotice;
@property(nonatomic) _Bool isBlock; // @synthesize isBlock=_isBlock;
@property(nonatomic) int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) int memberNum; // @synthesize memberNum=_memberNum;
@property(nonatomic) long long ownerUin; // @synthesize ownerUin=_ownerUin;
@property(nonatomic) int faceId; // @synthesize faceId=_faceId;
@property(nonatomic) int infoSeq; // @synthesize infoSeq=_infoSeq;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long groupUin; // @synthesize groupUin=_groupUin;
@property(retain, nonatomic) NSMutableArray *members; // @synthesize members=_members;
- (long long)compareByNick:(id)arg1;
- (_Bool)isUnnamedDiscussGroup;
- (_Bool)isMatchString:(id)arg1;
- (long long)compareLabel:(id)arg1;
- (int)getSearchModelPriority;
- (int)getSearchModelType;
- (struct _NSRange)getModelLabelMatchRange;
- (id)getRemarkLabel;
- (id)getModelLabel;
@property(readonly, copy) NSString *description;
- (long long)compareByGroupName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

