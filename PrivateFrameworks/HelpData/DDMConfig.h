//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMapTable, NSString, NSURL;

@interface DDMConfig : NSObject
{
    NSDictionary *_configDict;
    NSMapTable *_productTable;
}

+ (id)sharedConfig;
@property(retain) NSMapTable *productTable; // @synthesize productTable=_productTable;
@property(retain) NSDictionary *configDict; // @synthesize configDict=_configDict;
- (void).cxx_destruct;
@property(readonly) NSURL *supportSiteURL;
- (id)bookIDForProductName:(id)arg1;
@property(readonly) NSString *serviceName;
@property(readonly) NSString *serverURLString;
@property(readonly) NSArray *ddmPreloadedBookIDs;
@property(readonly) NSDictionary *ddmBooks;
- (id)_init;

@end

