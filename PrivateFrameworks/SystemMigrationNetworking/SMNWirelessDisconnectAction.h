//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@interface SMNWirelessDisconnectAction : SMNAction
{
}

+ (id)actionWithPayload:(id)arg1;
+ (int)actionID;
- (BOOL)success;
- (BOOL)returnsData;
- (id)setOfClassesToDecodeInTheResult;
- (BOOL)expectsAResult;
- (BOOL)setResultFromDict:(id)arg1;
- (id)resultData;
- (id)description;
- (id)requestPayload;

@end

