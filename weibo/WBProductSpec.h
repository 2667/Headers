//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WBProductSpec : NSObject
{
    NSString *_price;
    NSString *_stock;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;

@end

