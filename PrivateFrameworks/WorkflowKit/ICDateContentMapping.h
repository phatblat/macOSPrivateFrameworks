//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/ICContentMapping.h>

@class NSDateFormatter;

@interface ICDateContentMapping : ICContentMapping
{
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (void)getStringRepresentation:(CDUnknownBlockType)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (id)initWithDefinition:(id)arg1;

@end

