//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractCmd.h"

@class NSString;

@interface CallReplyCmd : AbstractCmd
{
    NSString *_roomId;
    NSString *_replyUid;
    unsigned long long _replyType;
}

@property(nonatomic) unsigned long long replyType; // @synthesize replyType=_replyType;
@property(retain, nonatomic) NSString *replyUid; // @synthesize replyUid=_replyUid;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (id)init;

@end
