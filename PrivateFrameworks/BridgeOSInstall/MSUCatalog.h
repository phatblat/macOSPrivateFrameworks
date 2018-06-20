//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSArray, NSDate, NSString, NSURL;

@interface MSUCatalog : NSObject <NSURLSessionDelegate>
{
    NSURL *_URL;
    unsigned long long _options;
    long long _version;
    NSArray *_products;
    NSDate *_loadDate;
    NSString *_testMode;
}

+ (BOOL)_validateDictionary:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *testMode; // @synthesize testMode=_testMode;
@property(retain) NSDate *loadDate; // @synthesize loadDate=_loadDate;
@property(retain) NSArray *products; // @synthesize products=_products;
@property long long version; // @synthesize version=_version;
@property unsigned long long options; // @synthesize options=_options;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_synthesizedCatalogDictionaryFromLocalDirectoryURL:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_parseFromDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithLocalProductsDirectoryURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithXMLData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
