//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TUnionImpsMananger : NSObject
{
    NSMutableDictionary *_protocolImpDic;
    NSMutableDictionary *_serviceImpDic;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *serviceImpDic; // @synthesize serviceImpDic=_serviceImpDic;
@property(retain, nonatomic) NSMutableDictionary *protocolImpDic; // @synthesize protocolImpDic=_protocolImpDic;
- (void).cxx_destruct;
- (void)registerDefaultImpsWithAppkey:(id)arg1 adzoneId:(id)arg2;
- (id)impObjectWithType:(unsigned long long)arg1 forProtocol:(id)arg2;
- (id)impObjectWithService:(id)arg1;
- (id)impObjectWithProtocol:(id)arg1;
- (void)registerImpObject:(id)arg1 withType:(unsigned long long)arg2 forProtocol:(id)arg3;
- (void)registerImpObject:(id)arg1 forService:(id)arg2;
- (void)registerImpObject:(id)arg1 forProtocol:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

