//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSArray, NSDictionary;

@interface SMNBundleInfoAction : SMNAction
{
    NSDictionary *_result;
    NSArray *_bundlePaths;
}

+ (id)actionWithPayload:(id)arg1;
+ (int)actionID;
@property(retain) NSArray *bundlePaths; // @synthesize bundlePaths=_bundlePaths;
@property(retain) NSDictionary *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (BOOL)success;
- (BOOL)returnsData;
- (BOOL)setResultFromData:(id)arg1;
- (id)resultData;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)requestPayload;
- (id)initWithBundlePaths:(id)arg1;

@end

