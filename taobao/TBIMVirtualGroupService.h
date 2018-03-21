//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

#import "TBIMVirtualGroupServiceAdapter-Protocol.h"

@class NSString, YHMuticastDelegate;
@protocol TBIMVirtualGroupServiceDelegate;

@interface TBIMVirtualGroupService : MKTMsgBusHelp <TBIMVirtualGroupServiceAdapter>
{
    YHMuticastDelegate<TBIMVirtualGroupServiceDelegate> *_mutiCastDelegate;
}

@property(retain, nonatomic) YHMuticastDelegate<TBIMVirtualGroupServiceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)ampVirtualGroupManageInfoUpdate:(id)arg1;
- (void)manageSetupInfoWithSubType:(id)arg1 configKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
