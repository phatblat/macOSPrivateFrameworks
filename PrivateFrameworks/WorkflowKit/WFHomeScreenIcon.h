//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, WFWorkflowIcon;

@interface WFHomeScreenIcon : NSObject
{
    WFWorkflowIcon *_workflowIcon;
    NSData *_customImageData;
}

@property(readonly, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(readonly, nonatomic) WFWorkflowIcon *workflowIcon; // @synthesize workflowIcon=_workflowIcon;
- (void).cxx_destruct;
- (id)initWithWorkflowIcon:(id)arg1 customImageData:(id)arg2;

@end

