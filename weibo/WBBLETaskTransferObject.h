//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CBCharacteristic, CBPeripheral, CBService, CBUUID, NSError;

@interface WBBLETaskTransferObject : NSObject
{
    CBPeripheral *_peripheral;
    CBService *_service;
    CBCharacteristic *_characteristic;
    CBUUID *_targetServiceUUID;
    CBUUID *_targetCharacterUUID;
    id _value;
    NSError *_error;
}

+ (id)object;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) CBUUID *targetCharacterUUID; // @synthesize targetCharacterUUID=_targetCharacterUUID;
@property(retain, nonatomic) CBUUID *targetServiceUUID; // @synthesize targetServiceUUID=_targetServiceUUID;
@property(retain, nonatomic) CBCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(retain, nonatomic) CBService *service; // @synthesize service=_service;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (void).cxx_destruct;

@end

