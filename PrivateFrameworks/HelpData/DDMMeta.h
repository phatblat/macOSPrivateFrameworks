//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HelpData/DDMObject.h>

@class NSString;

@interface DDMMeta : DDMObject
{
    NSString *_buildDate;
    NSString *_contentType;
    NSString *_framework;
    NSString *_appIcon;
    NSString *_product;
    NSString *_version;
}

@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *product; // @synthesize product=_product;
@property(readonly) NSString *appIcon; // @synthesize appIcon=_appIcon;
@property(readonly) NSString *framework; // @synthesize framework=_framework;
@property(readonly) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly) NSString *buildDate; // @synthesize buildDate=_buildDate;
- (void).cxx_destruct;

@end

