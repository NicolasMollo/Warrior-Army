#ifndef WARRIORARMY_STARTABLE
#define WARRIORARMY_STARTABLE

namespace Lifecycle {

	class IStartable {
	public:
		virtual void Start() = 0;
	};

}

#endif // !WARRIORARMY_STARTABLE
