//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCTemplateComponent.h"

@class NSString;

@interface MCTemplateHeaderObject : MCTemplateComponent
{
    _Bool _enableMask;
    NSString *_imageUrl;
}

@property(nonatomic) _Bool enableMask; // @synthesize enableMask=_enableMask;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;

@end
