//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTimer;
@protocol ODChatMsgBufferBucketDelegate;

@interface ODChatMsgBufferBucket : NSObject
{
    unsigned long long _maxHoldItems;
    double _chunkerCheckInterval;
    double _displayRefreshInterval;
    NSTimer *_displayRefreshTimer;
    NSTimer *_chunkerCheckTimer;
    NSMutableArray *_bucketPool;
    id <ODChatMsgBufferBucketDelegate> _delegate;
}

@property(nonatomic) __weak id <ODChatMsgBufferBucketDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *bucketPool; // @synthesize bucketPool=_bucketPool;
@property(retain, nonatomic) NSTimer *chunkerCheckTimer; // @synthesize chunkerCheckTimer=_chunkerCheckTimer;
@property(retain, nonatomic) NSTimer *displayRefreshTimer; // @synthesize displayRefreshTimer=_displayRefreshTimer;
@property(nonatomic) double displayRefreshInterval; // @synthesize displayRefreshInterval=_displayRefreshInterval;
@property(nonatomic) double chunkerCheckInterval; // @synthesize chunkerCheckInterval=_chunkerCheckInterval;
@property(nonatomic) unsigned long long maxHoldItems; // @synthesize maxHoldItems=_maxHoldItems;
- (void).cxx_destruct;

@end
