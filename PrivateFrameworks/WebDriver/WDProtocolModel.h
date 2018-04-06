//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WDProtocolModel : NSObject
{
    NSMutableDictionary *_commands;
    NSMutableDictionary *_types;
}

@property(readonly, nonatomic) NSMutableDictionary *types; // @synthesize types=_types;
@property(readonly, nonatomic) NSMutableDictionary *commands; // @synthesize commands=_commands;
- (void).cxx_destruct;
- (id)decodedResultsFromPayload:(id)arg1 forCommand:(id)arg2;
- (Ref_6b71ca39)encodedMessageForCommand:(id)arg1 withParameters:(id)arg2;
- (void)_loadProtocolFromURL:(id)arg1;
- (id)initWithProtocolAtURL:(id)arg1;

@end
