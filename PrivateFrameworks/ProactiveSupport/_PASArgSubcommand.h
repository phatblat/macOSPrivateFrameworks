//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface _PASArgSubcommand : NSObject
{
    NSString *_name;
    NSString *_helpDescription;
    CDUnknownBlockType _handler;
    NSMutableArray *_registeredOptions;
    NSMutableSet *_requiredOptions;
}

+ (id)simpleSubcommandWithHelpGenerator:(CDUnknownBlockType)arg1 name:(id)arg2 help:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)subcommandWithName:(id)arg1 help:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableSet *requiredOptions; // @synthesize requiredOptions=_requiredOptions;
@property(retain, nonatomic) NSMutableArray *registeredOptions; // @synthesize registeredOptions=_registeredOptions;
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *helpDescription; // @synthesize helpDescription=_helpDescription;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)customUsageHelpWithUsageOverride:(id)arg1 positionalArgString:(id)arg2 optionHelpOverride:(id)arg3 additionalHelpText:(id)arg4;
- (id)naiveUsageHelpWithPositionalArgString:(id)arg1;
- (id)optionLongHelp;
- (id)optionShortHelp;
- (void)registerOption:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 help:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

