//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IContentUpdateDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString;

@interface QutuManager : NSObject <IContentUpdateDelegate>
{
    NSString *_entranceImgUrl;
    NSMutableArray *_qutuAdded;
    NSString *_pkgId;
    NSDictionary *_qutuDic;
}

+ (_Bool)isQutuName:(id)arg1;
+ (id)getQutuName:(id)arg1;
+ (id)GetInstance;
@property(retain, nonatomic) NSDictionary *qutuDic; // @synthesize qutuDic=_qutuDic;
- (void)removeMoreQutu;
- (void)deleteCustomImage:(id)arg1 engine:(id)arg2 store:(id)arg3;
- (void)enterQutuSecion:(id)arg1 isPush:(_Bool)arg2;
- (void)downloadJSonUrl:(id)arg1;
- (void)onRequestContentUpdateSuccess;
- (void)requestContentUpdate;
- (void)requestContentUpdate12;
@property(readonly, nonatomic) NSString *pkgId;
@property(readonly, nonatomic) NSString *entranceImgUrl;
@property(readonly, nonatomic) _Bool entranceImgUrlGif;
- (id)entranceImgName;
@property(readonly, nonatomic) NSMutableArray *qutuAdded;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
