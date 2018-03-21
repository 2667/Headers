//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_TPBaseEngine.h>

@class CFT_TenpayCertificate, NSString;
@protocol TouchIdDelegate;

@interface CFT_TPTouchPayManager : CFT_TPBaseEngine
{
    CFT_TenpayCertificate *_tenpayCert;
    int _openFrom;
    int _scene;
    id <TouchIdDelegate> _delegate;
    NSString *_touchPayCsr;
    NSString *_identity;
    NSString *_password;
}

+ (void)invalidType;
+ (_Bool)getBiometryPayFlag:(id)arg1 type:(int)arg2;
+ (void)setBiometryPayFlag:(_Bool)arg1 uin:(id)arg2 type:(int)arg3;
+ (void)setLastGuideTime:(id)arg1;
+ (long long)getLastGuideTime:(id)arg1;
+ (void)deleteBiometryCertInfo:(id)arg1;
+ (id)certSign:(id)arg1 uin:(id)arg2;
+ (_Bool)isBiometryCertExist:(id)arg1;
+ (void)removeCertId:(id)arg1;
+ (id)getCertId:(id)arg1;
+ (_Bool)saveCertId:(id)arg1 uin:(id)arg2;
+ (_Bool)evaluateBiometry:(id)arg1 backTitle:(id)arg2 resultTo:(id)arg3;
+ (unsigned long long)systemBiometryOpenType;
+ (_Bool)isSystemOpenWithBiometryType:(unsigned long long)arg1;
+ (unsigned long long)biometrySupportedType;
+ (_Bool)isSupportWithBiometryType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int openFrom; // @synthesize openFrom=_openFrom;
@property(retain, nonatomic) NSString *touchPayCsr; // @synthesize touchPayCsr=_touchPayCsr;
@property(nonatomic) id <TouchIdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)orderDetail;
- (void)qpay_touchid_open;
- (void)reqTouchPayCert;
- (void)openBiometryPay:(int)arg1 param:(id)arg2;
- (id)makeRandomPasswordString;
- (void)resetBiometryData;
- (void)resetBiometryDataIfNeed:(id)arg1;
- (_Bool)isBiometryDataChanged;
- (id)curTouchDsData;
- (void)dealloc;
- (id)init;

@end
