//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSArray;

@interface SMNWindowsPathInfoAction : SMNAction
{
    BOOL _sizeDirectories;
    NSArray *_paths;
}

+ (int)actionID;
@property(retain) NSArray *paths; // @synthesize paths=_paths;
@property BOOL sizeDirectories; // @synthesize sizeDirectories=_sizeDirectories;
- (void).cxx_destruct;
- (BOOL)expectsAResult;
- (id)requestPayload;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithPaths:(id)arg1;

@end

