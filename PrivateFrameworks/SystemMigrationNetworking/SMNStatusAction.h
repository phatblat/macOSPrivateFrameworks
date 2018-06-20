//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSArray, NSNumber, NSString;

@interface SMNStatusAction : SMNAction
{
    NSNumber *_timeRemaining;
    NSNumber *_percentDone;
    NSString *_text;
    NSArray *_arguments;
    NSArray *_errorsAndWarnings;
    NSString *_sourceInterfaceTypeString;
    unsigned long long _sourceInterfaceType;
    unsigned long long _sourceInterfaceIconType;
}

+ (id)actionWithPayload:(id)arg1;
+ (int)actionID;
@property unsigned long long sourceInterfaceIconType; // @synthesize sourceInterfaceIconType=_sourceInterfaceIconType;
@property unsigned long long sourceInterfaceType; // @synthesize sourceInterfaceType=_sourceInterfaceType;
@property(retain) NSString *sourceInterfaceTypeString; // @synthesize sourceInterfaceTypeString=_sourceInterfaceTypeString;
@property(retain) NSArray *errorsAndWarnings; // @synthesize errorsAndWarnings=_errorsAndWarnings;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSString *text; // @synthesize text=_text;
@property(retain) NSNumber *percentDone; // @synthesize percentDone=_percentDone;
@property(retain) NSNumber *timeRemaining; // @synthesize timeRemaining=_timeRemaining;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)keepAlive;
- (BOOL)returnsData;
- (id)requestPayload;
- (id)description;
- (BOOL)expectsAResult;

@end

