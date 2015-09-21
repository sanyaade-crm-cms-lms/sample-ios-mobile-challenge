//
//  CapitalMarketsActivity.h
//  AnyPresence SDK
//

/*!
 @header CapitalMarketsActivity
 @abstract CapitalMarketsActivity class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CapitalMarketsActivity
 @abstract Generated model object: CapitalMarketsActivity.
 @discussion Use @link //apple_ref/occ/cat/CapitalMarketsActivity(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CapitalMarketsActivity/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CapitalMarketsActivity : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CapitalMarketsActivity.
 @result Class representing the data source associated with a CapitalMarketsActivity.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var activityType
 @abstract Generated model property: activity_type.
 */
@property (nonatomic, strong) NSString * activityType;

/*!
 @var citiAttendees
 @abstract Generated model property: citi_attendees.
 */
@property (nonatomic, strong) NSArray * citiAttendees;

/*!
 @var clientContacts
 @abstract Generated model property: client_contacts.
 */
@property (nonatomic, strong) NSArray * clientContacts;

/*!
 @var clientId
 @abstract Generated model property: client_id.
 */
@property (nonatomic, strong) NSString * clientId;

/*!
 @var clientName
 @abstract Generated model property: client_name.
 */
@property (nonatomic, strong) NSString * clientName;

/*!
 @var date
 @abstract Generated model property: date.
 */
@property (nonatomic, strong) NSString * date;

/*!
 @var region
 @abstract Generated model property: region.
 */
@property (nonatomic, strong) NSString * region;

/*!
 @var year
 @abstract Generated model property: year.
 */
@property (nonatomic, strong) NSNumber * year;

@end
