//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ANXService-Protocol.h"

@class ANXPayPushServiceModel, NSString;

@interface ANXPayPushService : NSObject <ANXService>
{
    ANXPayPushServiceModel *_payPushModel;
}

@property(retain, nonatomic) ANXPayPushServiceModel *payPushModel; // @synthesize payPushModel=_payPushModel;
- (void).cxx_destruct;
- (void)startWithParams:(id)arg1 onResult:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

