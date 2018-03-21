//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZUploadConfigQueryDelegate-Protocol.h>

@class NSString;

@interface QZUploadConfigQueryImplement : NSObject <QZUploadConfigQueryDelegate>
{
}

+ (long long)getISP;
+ (id)fetchWifiBSSID;
- (_Bool)updatePacketEXIF:(id)arg1;
- (_Bool)waitFileProcessing:(id)arg1;
- (long long)checkFileStatus:(id)arg1;
- (id)getLocalIP;
- (id)getTestIp;
- (_Bool)isTestEnv;
- (_Bool)shouldReadBackupIpWithClientInfo;
- (id)getDeviceInfo;
- (id)getQua;
- (id)getCarrierNameWWAN;
- (long long)getCarrierTypeWWAN;
- (long long)getWifiCarrierType;
- (int)getNetworkType;
- (id)getBackUpIpOtherV2;
- (id)getBackUpIpVideoV2;
- (id)getBackUpIpPicV2;
- (id)getOtherV2DomainName;
- (id)getVideoV2DomainName;
- (id)getPicV2DomainName;
- (id)getOptimumIpOtherV2;
- (id)getOptimumIpVideoV2;
- (id)getOptimumIpPicV2;
- (id)getUploadPorts;
- (id)getBackUpIpReport;
- (id)getOptimumIpReport;
- (id)getReportURL;
- (long long)uploadV2NetTimeout;
- (long long)uploadV2ConnRetryMaxCount;
- (long long)uploadV2PacketRetryMaxCount;
- (long long)uploadV2SocketTimeout;
- (long long)uploadV2ConnectTimeout;
- (long long)batchControlCount;
- (long long)multiSocketCount;
- (long long)concurrentFileCount;
- (id)qzoneDocPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
