//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCXState.h>

@interface OCXReadState : OCXState
{
}

- (id)OCXReadRequiredRelationshipForNode:(struct _xmlNode *)arg1 packagePart:(id)arg2;
- (id)OCXReadRequiredRelationshipForNode:(struct _xmlNode *)arg1 attributeName:(const char *)arg2 packagePart:(id)arg3;
- (id)OCXReadRelationshipForNode:(struct _xmlNode *)arg1 packagePart:(id)arg2;
- (id)OCXReadRelationshipForNode:(struct _xmlNode *)arg1 attributeName:(const char *)arg2 packagePart:(id)arg3;

@end

