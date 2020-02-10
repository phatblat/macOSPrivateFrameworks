//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString, WFColor;

@interface WFTodoistProject : MTLModel <NSSecureCoding, MTLJSONSerializing>
{
    BOOL _collapsed;
    long long _projectId;
    NSString *_name;
    WFColor *_color;
    long long _indent;
    long long _order;
}

+ (id)collapsedJSONTransformer;
+ (id)colorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(readonly, nonatomic) long long order; // @synthesize order=_order;
@property(readonly, nonatomic) long long indent; // @synthesize indent=_indent;
@property(readonly, nonatomic) WFColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long projectId; // @synthesize projectId=_projectId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
