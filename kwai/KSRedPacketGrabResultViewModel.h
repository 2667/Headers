//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BFCancellationTokenSource, KSRedPacket, KSRedPacketGrab, KSRedPacketGrabResultModel, NSMutableArray, NSString;

@interface KSRedPacketGrabResultViewModel : NSObject
{
    _Bool _loading;
    KSRedPacket *_redPacket;
    KSRedPacketGrab *_myGrab;
    NSString *_tips;
    KSRedPacketGrabResultModel *_model;
    BFCancellationTokenSource *_tcs;
    NSMutableArray *_lukiestGrab;
}

@property(retain, nonatomic) NSMutableArray *lukiestGrab; // @synthesize lukiestGrab=_lukiestGrab;
@property(retain, nonatomic) BFCancellationTokenSource *tcs; // @synthesize tcs=_tcs;
@property(retain, nonatomic) KSRedPacketGrabResultModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(readonly, nonatomic) KSRedPacketGrab *myGrab; // @synthesize myGrab=_myGrab;
@property(readonly, nonatomic) KSRedPacket *redPacket; // @synthesize redPacket=_redPacket;
- (void).cxx_destruct;
- (id)grabResultListURL;
- (id)luckiestGrabAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfLuckiestGrabs;
- (void)dealloc;
- (id)loadGrabResult;
- (id)initWithRedPacket:(id)arg1 myGrab:(id)arg2;

@end

