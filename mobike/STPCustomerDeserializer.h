//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, STPCustomer;

@interface STPCustomerDeserializer : NSObject
{
    STPCustomer *_customer;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) STPCustomer *customer; // @synthesize customer=_customer;
- (void).cxx_destruct;
- (id)initWithJSONResponse:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

