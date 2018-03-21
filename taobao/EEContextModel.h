//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EEDeviceModel, EEMtopModel, EEServiceModel, EEUserModel;
@protocol ABConditionProtocol;

@interface EEContextModel : NSObject
{
    EEUserModel *_user;
    EEDeviceModel *_device;
    EEMtopModel *_mtop;
    EEServiceModel *_service;
    id <ABConditionProtocol> _protocol;
}

@property(nonatomic) __weak id <ABConditionProtocol> protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) EEServiceModel *service; // @synthesize service=_service;
@property(retain, nonatomic) EEMtopModel *mtop; // @synthesize mtop=_mtop;
@property(retain, nonatomic) EEDeviceModel *device; // @synthesize device=_device;
@property(retain, nonatomic) EEUserModel *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)valueForKey:(id)arg1;
- (void)adjustModel;
- (void)initTtidInfo;
- (id)init;

@end
