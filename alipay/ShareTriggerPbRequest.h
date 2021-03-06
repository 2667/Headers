//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface ShareTriggerPbRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasGroupId;
    _Bool _hasNeedAddFriends;
    _Bool _hasBizType;
    _Bool _hasTradeNo;
    _Bool _hasBizExtInfo;
    _Bool _needAddFriends;
    NSString *_groupId;
    NSMutableArray *_friends;
    NSString *_bizType;
    NSString *_tradeNo;
    NSString *_bizExtInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *bizExtInfo; // @synthesize bizExtInfo=_bizExtInfo;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) _Bool needAddFriends; // @synthesize needAddFriends=_needAddFriends;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends=_friends;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly) _Bool hasBizExtInfo; // @synthesize hasBizExtInfo=_hasBizExtInfo;
@property(readonly) _Bool hasTradeNo; // @synthesize hasTradeNo=_hasTradeNo;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
@property(readonly) _Bool hasNeedAddFriends; // @synthesize hasNeedAddFriends=_hasNeedAddFriends;
@property(readonly) _Bool hasGroupId; // @synthesize hasGroupId=_hasGroupId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addFriends:(id)arg1;
- (void)setFriendsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

