//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WBWebBackForwardListItem : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_URLString;
    NSString *_originalURLString;
}

@property(retain, nonatomic) NSString *originalURLString; // @synthesize originalURLString=_originalURLString;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

