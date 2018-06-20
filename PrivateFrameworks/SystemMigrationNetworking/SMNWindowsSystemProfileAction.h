//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSDictionary;

@interface SMNWindowsSystemProfileAction : SMNAction
{
    NSDictionary *_profileDictionary;
}

+ (int)actionID;
+ (id)actionWithPayload:(id)arg1;
@property(retain) NSDictionary *profileDictionary; // @synthesize profileDictionary=_profileDictionary;
- (void).cxx_destruct;
- (id)description;
- (BOOL)success;
- (id)result;
- (BOOL)expectsAResult;
- (BOOL)setResultFromData:(id)arg1;
- (id)requestPayload;
- (id)initWithProfile:(id)arg1;

@end

