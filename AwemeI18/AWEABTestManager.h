//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEUserMessage-Protocol.h"
#import "InstallAndDeviceIDMessage-Protocol.h"

@class AWEABTestModel, NSMutableDictionary, NSString;

@interface AWEABTestManager : NSObject <AWEUserMessage, InstallAndDeviceIDMessage>
{
    _Bool _localABSettingEnabled;
    AWEABTestModel *_configuration;
    NSMutableDictionary *_consistentABTestDic;
}

+ (long long)getABTestCaseInhouse:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *consistentABTestDic; // @synthesize consistentABTestDic=_consistentABTestDic;
@property(retain, nonatomic) AWEABTestModel *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool localABSettingEnabled; // @synthesize localABSettingEnabled=_localABSettingEnabled;
- (void).cxx_destruct;
- (void)didFinishLogout;
- (void)didFinishLogin;
- (void)didUpdateDeviceIDFrom:(id)arg1 to:(id)arg2;
- (void)didUpdateInstallIDFrom:(id)arg1 to:(id)arg2;
- (id)_retriveModel;
- (void)_saveModel:(id)arg1;
- (void)networkingReachabilityDidChangeNotification;
- (long long)getABTestCase:(id)arg1;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

