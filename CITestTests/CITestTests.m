//
//  CITestTests.m
//  CITestTests
//
//  Created by Andrew Pereira on 5/29/14.
//  Copyright (c) 2014 Andrew Pereira. All rights reserved.
//

#import <XCTest/XCTest.h>

@interface CITestTests : XCTestCase

@end

@implementation CITestTests

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testMyTests {
    XCTAssert([@"a" isEqualToString:@"a"], @"Not equal strings");
}
@end
