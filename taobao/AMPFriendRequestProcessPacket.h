//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPFriendRequestProcessPacket : AMPNetPacket
{
    NSString *_friendId;
    NSString *_operation;
    NSString *_feedId;
    NSString *_channel;
}

@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSString *friendId; // @synthesize friendId=_friendId;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithFriendId:(id)arg1 operator:(id)arg2 feedId:(id)arg3 channel:(id)arg4;

@end

