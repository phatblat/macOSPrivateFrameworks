//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/KSForwardingWriter.h>

@class KSXMLAttributes, KSXMLElementContentsProxy, NSArray, NSMutableArray;

@interface KSXMLWriter : KSForwardingWriter
{
    KSXMLAttributes *_attributes;
    NSMutableArray *_openElements;
    BOOL _elementIsEmpty;
    unsigned long long _inlineWritingLevel;
    KSXMLElementContentsProxy *_contentsProxy;
    long long _indentation;
    unsigned long long _encoding;
}

+ (void)initialize;
+ (id)stringFromAttributeValue:(id)arg1;
+ (id)stringFromCharacters:(id)arg1;
@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentation;
- (void).cxx_destruct;
- (void)writeString:(id)arg1;
- (void)writeStringByEscapingXMLEntities:(id)arg1 escapeQuot:(BOOL)arg2;
- (void)stopWritingInline;
- (void)startWritingInline;
- (BOOL)isWritingInline;
- (BOOL)elementCanBeEmpty:(id)arg1;
- (void)writeEndTag:(id)arg1;
- (void)closeEmptyElementTag;
- (void)closeStartTag;
- (void)didStartElement;
- (id)topElement;
- (BOOL)hasOpenElement:(id)arg1;
- (unsigned long long)openElementsCount;
@property(readonly, nonatomic) __weak NSArray *openElements;
- (BOOL)canWriteElementInline:(id)arg1;
- (id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3;
- (BOOL)validateElement:(id)arg1;
- (void)decreaseIndentationLevel;
- (void)increaseIndentationLevel;
- (void)endCDATA;
- (void)startCDATA;
- (void)closeComment;
- (void)openComment;
- (void)writeComment:(id)arg1;
- (void)startNewline;
- (void)writeAttribute:(id)arg1 value:(id)arg2;
- (void)writeAttributeValue:(id)arg1;
- (BOOL)hasCurrentAttributes;
- (id)currentAttributes;
- (void)pushAttribute:(id)arg1 value:(id)arg2;
- (void)popElement;
- (void)pushElement:(id)arg1;
- (void)endElement;
- (void)willStartElement:(id)arg1;
- (void)startElement:(id)arg1 attributes:(id)arg2;
- (void)startElement:(id)arg1 writeInline:(BOOL)arg2;
- (void)startElement:(id)arg1;
- (void)writeElement:(id)arg1 text:(id)arg2;
- (id)writeElement:(id)arg1 contentsInvocationTarget:(id)arg2;
- (void)writeCharacters:(id)arg1;
- (void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2;
- (void)flush;
- (void)close;
- (id)initWithOutputWriter:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithOutputWriter:(id)arg1;

@end

