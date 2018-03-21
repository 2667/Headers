//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBSearchOnesearchNXConfigModel;

@interface TBSearchOnesearchNXConfigManager : NSObject
{
    _Bool _isSNXWeex;
    NSString *_nxUrl;
    NSString *_h5Tpl;
    NSString *_onesearchUrl;
    unsigned long long _onesearchMode;
    NSString *_nxFrom;
    TBSearchOnesearchNXConfigModel *_model;
    NSString *_currentNXSdkVersion;
}

@property(retain, nonatomic) NSString *currentNXSdkVersion; // @synthesize currentNXSdkVersion=_currentNXSdkVersion;
@property(retain, nonatomic) TBSearchOnesearchNXConfigModel *model; // @synthesize model=_model;
@property(nonatomic) NSString *nxFrom; // @synthesize nxFrom=_nxFrom;
@property(nonatomic) _Bool isSNXWeex; // @synthesize isSNXWeex=_isSNXWeex;
@property(nonatomic) unsigned long long onesearchMode; // @synthesize onesearchMode=_onesearchMode;
@property(retain, nonatomic) NSString *onesearchUrl; // @synthesize onesearchUrl=_onesearchUrl;
@property(retain, nonatomic) NSString *h5Tpl; // @synthesize h5Tpl=_h5Tpl;
@property(retain, nonatomic) NSString *nxUrl; // @synthesize nxUrl=_nxUrl;
- (void).cxx_destruct;
- (id)getPageAbtestBucketName:(id)arg1;
- (id)getPageAbtestConfig:(id)arg1;
- (id)getProcessedPageAbtestUrl:(id)arg1;
- (id)getConfigForOrangeKey:(id)arg1;
- (id)buildQueryString:(id)arg1 enableEncoding:(_Bool)arg2;
- (id)parseStr:(id)arg1;
- (_Bool)abtestHitWithNXPage:(id)arg1;
- (id)getH5TplContent;
- (id)getLogNXAbtestName:(id)arg1;
- (_Bool)isBeta;
- (_Bool)checkNXMode;
- (id)getSDKVersion;
- (id)getParsedNxConfig:(id)arg1;
- (id)getConfigDictWithNSURL:(id)arg1;
- (void)setModelDataWithOnesearchUrl:(id)arg1;
- (void)clearData;
- (id)init;

@end
